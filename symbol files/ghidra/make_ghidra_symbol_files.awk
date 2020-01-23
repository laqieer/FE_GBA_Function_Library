#!/usr/bin/awk -f

BEGIN {
	FS="|"
}
{
	if(NR>4 && $7!="")
	{
		if($2!="0")
			print $7 " 0x" $2 > "FE6.txt"
		if($3!="0")
			print $7 " 0x" $3 > "FE7J.txt"
		if($4!="0")
			print $7 " 0x" $4 > "FE7U.txt"
		if($5!="0")
			print $7 " 0x" $5 > "FE8J.txt"
		if($6!="0")
			print $7 " 0x" $6 > "FE8U.txt"
	}
}
