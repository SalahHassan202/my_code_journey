-- like operator
-- % and _ 

/**

operator     and    description 

'a%'        ===> find all values start with letter a 
'%a'        ===> find all values end with letter a 
'%a%'       ===> find all values contain letter a in any position
'_r%'       ===> find all values that has letter r in second position  
'__r%'      ===> find all values that has letter r in third position  
'r_%'       ===> find all values that start with letter r and the length is 2 
'a%d'       ===> find all values that start with letter a and end with letter d 

**/


-- find all values start with letter a 
select * from Table_1 where city like 'a%' ;


-- find all values end with letter t
select * from Table_1 where city like '%t' ;


-- find all values contain letter a in any position
select * from Table_1 where city like '%a%' ;


-- find all values that has letter  in second position
select * from Table_1 where city like '-o' ;


-- find all values that has letter d in third position
select * from Table_1 where city like '__d%' ;


-- find all values that start with letter s and the length is 6 
select * from Table_1 where city like 's_____' ;


-- find all values that start with letter a and end with letter d 
select * from Table_1 where city like 'e%y' ;

