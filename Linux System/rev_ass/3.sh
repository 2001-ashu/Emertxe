<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
if [ $# -eq 0 ]
then
   echo "Please pass command.."
elif [ $# -lt 3 ]
then
   echo "Please pass three arguments."
else
   case $2 in
       +)
	  a=`expr "scale=2; $1 $2 $3 " |bc`
	 echo "$1 $2 $3 = $a"
	 ;;

       -)
          b=`expr "scale=2; $1 $2 $3 " |bc`
	  echo "$1 $2 $3 = $b"
	  ;;
      x)
	  c=`expr "scale=2; $1 * $3 " |bc`
	  echo "$1 $2 $3 = $c"
	  ;;
      /)
	  d=`expr "scale=2; $1 $2 $3 "|bc`
	  echo "$1 $2 $3 = $d"
	  ;;
      *)
	  echo "Invalid Operator.."

esac
fi

           

                     
 
     
     
            
            
           
   

