void main()
{
  // map

  Map <String , double > studentGrades = 
  {
    "salah" : 60.5 ,
    "ali" : 70.0 , 
    "mohamed" : 80.5 ,
    "alaa" : 90.0 
  } ;
  print(studentGrades) ;       // {salah: 60.5, ali: 70.0, mohamed: 80.5, alaa: 90.0}
  print("**********************") ; 
  studentGrades["tawfiq"] = 100.0 ;
  print(studentGrades) ;     //  {salah: 60.5, ali: 70.0, mohamed: 80.5, alaa: 90.0, tawfiq: 100.0}
}