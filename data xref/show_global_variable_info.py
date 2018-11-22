# It shows infomation on global variables when decompiling a function.
# by laqieer
# 2018/11/22

import idautils
import idaapi
import idc

import traceback

class cot_obj_visitor_t(idaapi.ctree_visitor_t):

    def __init__(self):
        idaapi.ctree_visitor_t.__init__(self, idaapi.CV_PARENTS)
        return

    def visit_expr(self, exp):

        try:
            if exp.op == idaapi.cot_obj:
                if (exp.obj_ea <= 0x203FFFF and exp.obj_ea >= 0x2000000) or (exp.obj_ea <= 0x3007FFF and exp.obj_ea >= 0x3000000):
                    self.show_global_variable(exp.obj_ea, exp.refwidth)
        except:
            traceback.print_exc()

        return 0

    def show_global_variable(self, ea, w):
        # print size, address, parent node type and level in AST
        if len(self.parents) > 0:
            print "access %d bytes at %X, parent:%s, level:%d" % (w, ea, self.parents[len(self.parents) - 1].to_specific_type.opname, len(self.parents))
        else:
            print "access %d bytes at %X, parent:NULL, level:0" % (w, ea)

        return

class hexrays_callback_info(object):

    def __init__(self):
        return

    def event_callback(self, event, *args):

        try:
            if event == idaapi.hxe_maturity:
                cfunc, maturity = args

                if maturity == idaapi.CMAT_FINAL:
                    cbv = cot_obj_visitor_t()
                    cbv.apply_to(cfunc.body, None)

        except:
            traceback.print_exc()

        return 0

if idaapi.init_hexrays_plugin():
    i = hexrays_callback_info()
    idaapi.install_hexrays_callback(i.event_callback)
else:
    print 'Error: hexrays is not available.'
