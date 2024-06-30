<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
arr=($@)
len=${#arr[@]}
if [ $# -eq 0 ]
then 
    echo "Please Pass CLA."
else
    case ${arr[0]} in
	-a)
	    for i in `seq $((len - 2)) -1 1`
	    do
		for j in `seq $i`
		do
		    if [ ${arr[j]} -gt ${arr[j+1]} ]
		    then
			temp=${arr[j]}
			arr[j]=${arr[j+1]}
			arr[j+1]=$temp
		    fi
		done
	    done
	    echo "Ascending order of array is " ${arr[@]:1}
	    ;;
	-d)
	    for i in `seq $((len - 2)) -1 1`
	    do
		for j in `seq $i`
		do
		    if [ ${arr[j]} -lt ${arr[j+1]} ]
		    then
			temp=${arr[j]}
			arr[j]=${arr[j+1]}
			arr[j+1]=$temp
		    fi
		done
	    done
	    echo "Descending Order of array is " ${arr[@]:1}
	    ;;
	*) echo "Invalid"
    esac
fi

