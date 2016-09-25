#!bin/sh
for file in `ls *.cpp`
do
    if test -f $file
    then
        echo $file 是文件,开始进行代码混淆
	tigress --Transform=Virtualize --Functions=main --out=mixed_$file $file
    fi
    if test -d $file
    then
        echo $file 是目录
    fi
done
