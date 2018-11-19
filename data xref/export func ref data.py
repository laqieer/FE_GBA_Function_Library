# export data referenced from / to all functions in IDA
# by laqieer
# 2018-11-19

from idautils import *
from json import *

data_ref_all_funcs = {}

if __name__ == "__main__":
	for func in Functions():
		data_ref_func = {}
		for item in FuncItems(func):
			offset = item - func
			data_ref_offset = []
			for ref in DataRefsFrom(item):
				data_ref_offset.append(ref)
			for ref in DataRefsTo(item):
				data_ref_offset.append(ref)
			if len(data_ref_offset) > 0:
				data_ref_func[offset] = data_ref_offset
		if len(data_ref_func) > 0:
			data_ref_all_funcs[func] = data_ref_func
		fn = get_root_filename().rpartition('.')[0] + '_func_ref_data.json'
	with open(fn, "w") as f:
		dump(data_ref_all_funcs, f)
		print("Data referenced from / to all functions have been written to " + fn)