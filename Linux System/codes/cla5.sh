<<DOC
Name:
Date:
DESCRIPTION: calculation using switch case in give input by command line arg.
SAMPLE I/P:
SAMPLE O/P:
DOC
if [ $# -eq 3 ]
then


case $2 in
    +) echo "$(($1 $2 $3))"
	;;
    -) echo "$(($1 $2 $3))"
	;;

    '*') echo "$(($1 $2 $3))"
	;;

    /) echo "scale=2 ; $1 $2 $3" | bc
       ;;

    %) echo "$(($1 $2 $3))"
 	;;

    *) echo "It is Invalid Syntax."
	esac

    else
	echo "The Arguments are not equal to 3.."
fi 
     
            
            
           
   

