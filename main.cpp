#include <iostream>
#include <iomanip>
using namespace std; 

void print_array(const int a[], int n); 
void swap (int& a, int& b); 
int find_max (int a[], int n);  
void selection_sort ( int a[], int n); 

int main() {
  int a[] = { 17, 8, 21, 7, 11, 13, 5, 19 };
  print_array(a , 8);  
  selection_sort(a , 8 ); 
  print_array(a , 8);
  return 0; 
}

void print_array( const int a[], int n){
  for (int i=0; i<n; i++)
    cout << setw(5) << a[i]; 
  cout << endl; 
}

void swap (int& a, int& b) {
  int temp = a; 
  a= b; 
  b= temp; 
}


int find_max (int a[], int n){
  int max=0;
  for (int i=1; i<n ; i++){
      if ( a[i] > a[max])
      max = i; 
  }
return max; 
}

void selection_sort ( int a[], int n){
  int max; 
  while (n > 1){ 
    max = find_max( a, n); 
    swap( a[max], a[n-1]); 
    n--; 
  }
} 
