<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC

a=(`ls *.jpg`)
if [ $# -eq 0 ]
then
    echo "Error : Please pass the prefix name through command line."
else
for i in ${a[@]}
do
     
	      var=`echo $i |tr -cd [:digit:]`
		     
		     mv $i $1$var.jpg
		 done
fi
			     
			          
			          
			                 
			                 
			                
			        





                     
 
     
     
            
            
           
   

