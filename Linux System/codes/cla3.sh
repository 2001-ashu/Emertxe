<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
if [ $# -eq 3 ]
then
    if [ $1 = + ]
    then 
	echo "$(($2 $1 $3))"
    elif [ $3 = + ]
    then
      echo "$(($1 $3 $2))"
    
    elif [ $2 = + ]
    then	
      echo "$(($1 $2 $3))"
  else 
	echo "Pass The Operator like 3 + 2 // 3 3 + // + 3 3."

    fi
else 
    echo "Enter Valid Form.."
fi

                     
 
     
     
            
            
           
   

