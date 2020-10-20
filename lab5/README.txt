Summarize your lab:

  Part 1:
     Works  Yes
     
  Part 2:
     Works  Yes
     
  Part 3:
     Works  No, because of issues to get everything running on my laptop.
     
***ANSWERS TO QUESTIONS***
 Question 1:
     Which hash table collision resolution method did you use
     (eg. chaining or open addressing)? Explain your choice
     briefly (less than 25 words).
 YOUR ANSWER:
 I used the open addressing method because it is easier to implement for a problem like this, and we learned it in class.
 
 
 
 
 Question 2:
       Which hash function (division or multiplication) did you use?
       How did you convert a string into a number?
 YOUR ANSWER:
I used the division hash function. I converted a string to a number by getting its length.
 
 
 
 Question 3:
       Another legal XML tag not used in this lab is the
       stand-alone tag.  This kind of tag
       combines both a start-tag and end-tag in one.
       It is identified with a '/' (slash) preceding the
       final >.  (For example, the <foo/>
       is a stand-alone tag that is self balancing.
       
       Describe briefly how
       you would modify Part 3 to allow this kind of tag.
       
 YOUR ANSWER:
 I would modify Part 3 by saving the previous value of each index, except for one. Once the '>' is encountered, the previous value would be checked. If the previous value was a '/', the tag would be allowed.