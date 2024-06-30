
read -p "Enter a Number:" n

sum=0
for var in `seq $n`
do
    sum=$(($var + $sum))
    
done
    echo "$sum"
