<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
arr=($@)
len=${#arr}
opr=`echo "${arr: -1}"`
if [ $# -eq 0 ]
then
    echo "Please Pass CLA"
else
    case $opr in
	+) sum=0
	    for i in `seq 0 $((len - 2))`
	    do
		l=${arr:i:1}
		sum=$(($sum + $l))
	    done
	    echo "$sum"
	    ;;
	-) sub=${arr:0:1}
	    for i in `seq 1 $((len - 2))`
	    do
		m=${arr:i:1}
		sub=$(($sub - $m))
	    done
	    echo "$sub"
	    ;;
	x) mul=${arr:0:1}
	    for i in `seq 1 $(($len - 2))`
	    do
		n=${arr:i:1}
		mul=`expr "scale=2; $mul * $n "|bc `
	    done
	    echo "$mul"
	    ;;
	/) div=${arr:0:1}
	    for i in `seq 1 $((len - 2))`
	    do
		o=${arr:i:1}
		div=`expr "scale=2; $div / $o" |bc `
	    done
	    echo "$div"
	    ;;
	*) echo "Invalid"

	esac
fi

