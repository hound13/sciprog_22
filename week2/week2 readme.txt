1. File Conversion.c
In line 29, we fill with i, which is obtained from line18~23 and represents the number of digits of variable binnum
In line 31, we find that a float can only represent 7 valid digits

2. File Sum.c
In lines 11 and 17, we notice that if we use sum=sum+1/i, both will get incorrect results. The correct expression is sum=sum+1.0/i, which indicates that an integer divided by an integer always gets an integer
In line 25, we find that there is a difference between sum1 and sum2, but the two sums are mathematically the same