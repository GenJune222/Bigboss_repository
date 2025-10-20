
#include <iostream>
int**creak(size_t rows,size_t cols);
void remove(int* m,size_t rows, sixe_t cols);

void input(int**m, size_t rows, size_t cols){
   for (size_t i=0, i<rows&&(std::cin),++i){
      for (size_t j=0, j<cold&&(std::cin,++j){
           std::cin>>[i][j];

void output(const int*const*m, size_t rows, size_t cols){
   std::cout<<rows<<" "<<cols

int main(){
   size_t rows =0, cols = 0;
   std::cin>>rows>>cols;
   if(!std::cin){
      return 1;
   }
   int**m = create(rows,cols);
   input(m,rows,cols);
   if (!std::cin){
      remove();
      return 1;
   }
   output(m,rows,cols);
   remove(m,rows,cols);
}
