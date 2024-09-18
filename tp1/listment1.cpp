# include <iostream>
int main ()
{ 
 double x = 2.0;
 double y = 3.0;
 double & r = x ;
 r = y ;
 r = 5;
 std :: cout << " x vaut " << x << std :: endl ;
}