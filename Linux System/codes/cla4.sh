<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC

#if [ -d $1 ]
#if [ -s $1 ]
#if [ -e $1 ]
if [ -f $1 ]
then
   cat $1
else
   echo "It is not present.."
fi 

                     
 
     
     
            
            
           
   

