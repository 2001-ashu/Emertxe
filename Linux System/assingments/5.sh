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
    echo "Error : Please pass the arguments through CL."
    echo "Usage : ./operator_dependent.sh 2345+"
else
    case $opr in

     +)sum=0
	    for i in `seq 0 $(($len-2))`
	do
	    
	    l=${arr:i:1} 

	    sum=$(($l + $sum))
	done
	echo "Sum of digits = "$sum
         ;;
     -)sub=${arr:0:1}
	 for i in `seq 1 $(($len-2))`
	 do
            m=${arr:i:1}
	    sub=$(($sub - $m))
	done
 	    echo "Subtraction of digits =" $sub
	    ;;
     x)mul=${arr:0:1}
	 for i in `seq 1 $(($len-2))`
	 do
	     
	     n=${arr:i:1}
	     mul=$(($mul * $n))
	 done
	     echo "Multiplication of digits = "$mul
	     ;;
     /)div=${arr:0:1}
        for i in `seq 1 $(($len-2))`
         do
          
	o=${arr:i:1}
        div=`echo "scale=2; $div / $o"|bc`
    done
         echo "Division of digits = " $div	
	 ;;
     *)
         echo "Error: Operator missing or invalid operator, please pass operator as last digit (+,-,x,/)"	 
 esac
     
            
            
           
fi

