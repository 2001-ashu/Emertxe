<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC

if [ $# -eq 0 ]

then
    echo "Error:Please pass the arguments through command line"
    echo "Usage:./arithmatic_calc.sh 2.3 + 6.7"
elif [ $# -lt 3 ]
then
    echo "Error: Please pass the arguments."
    echo "Usage:./arithmatic_calc.sh 2.3 + 6.7"
else
    case $2 in
	+) a=`expr "scale=2; $1 $2 $3" |bc`
	    echo "$1 $2 $3 = $a" 
	    ;;

	-) b=`expr "scale=2; $1 $2 $3" |bc`
	    echo "$1 $2 $3 = $b" 
	    ;; 
	x) c=`expr "scale=2; $1 * $3" |bc`
	    echo "$1 $2 $3 = $c" 
	    ;;

	/) d=`expr "scale=2; $1 $2 $3" |bc`
	    echo "$1 $2 $3 = $d" 
	    ;;
	*) echo  "Invalid Option."
	    ;;
    esac	  

fi




