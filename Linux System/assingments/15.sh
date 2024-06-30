<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
if [ $# -eq 0 ]
then
    echo "Error : Please pass the file name through command line."
else
    if [ -s $1 ]
    then
echo "1 – Lower to upper"
echo "2 – Upper to lower"
read -p "Please select option :" n
case $n in
    1) cat $1 | tr [:lower:] [:upper:]
	;;
    
    2) cat $1 | tr [:upper:] [:lower:]
	;;
    *) echo "Error.."
esac
else 
    echo "Error: No contents inside the file."
    fi
fi
                     
 
     
     
            
            
           
   

