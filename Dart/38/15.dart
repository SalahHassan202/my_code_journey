void main()
{
  data("salah") ; 
}

void data(String name , [int? age])             // optional paramater
{
  if(age == null)
  {
    print("my name is $name") ;                // my name is salah
  }
  else
  {
    print("my name is $name and my age is $age") ; 
  }



}