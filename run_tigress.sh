#!bin/sh
for file in `ls mixed*.c`
do
    if test -f $file
    then
        echo $file 是文件,开始进行代码混淆
	#tigress --Transform=Virtualize --Functions=main --out=mixed_$file $file
	gedit $file
	#tigress --Transform=Virtualize --Functions=main --out=mixed_$file $file
	#if [ "$?"= "0" ]; then
	#	echo $file\n >>error.txt
	   
	
	#else
	#	cat mixed_$file
	#fi
	
    fi
    if test -d $file
    then
        echo $file 是目录
    fi
done
