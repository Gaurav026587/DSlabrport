#include<iostream>
using namespace std;
int m;
void conjuction(bool mat1[50][50],bool mat2[50][50]){
 

bool an[50][50];
int i,j;
for(i=0;i<m;i++){
for(j=0;j<m;j++){
if(mat1[i][j]==true && mat2[i][j]==true){
an[i][j]=1;
}
else{
an[i][j]=0;
}
}
}
for(i=0;i<m;i++){
for(j=0;j<m;j++){
cout<<an[i][j]<<"\t";
}
cout<<endl;
}
}


void disjuction(bool mat1[50][50],bool mat2[50][50]){
bool an[50][50];
int i,j;
for(i=0;i<m;i++){
for(j=0;j<m;j++){
if(mat1[i][j]==true || mat2[i][j]==true){
an[i][j]=1;
}
else{
an[i][j]=0;
}
}
}
for(i=0;i<m;i++){
for(j=0;j<m;j++){
 

cout<<an[i][j]<<"\t";
}
cout<<endl;
}
 

 

}
void negation(bool mat1[50][50],bool mat2[50][50]){
 

bool an[50][50];
int i,j;
cout<<"negation of matrix 1:"<<endl;
for(i=0;i<m;i++){
for(j=0;j<m;j++){
if(mat1[i][j]==true ){
an[i][j]=0;
}
else{
an[i][j]=1;
}
}
}
for(i=0;i<m;i++){
for(j=0;j<m;j++){
 

cout<<an[i][j]<<"\t";
}
cout<<endl;
}
cout<<"negation of matrix 2:"<<endl;
for(i=0;i<m;i++){
for(j=0;j<m;j++){
if(mat2[i][j]==true ){
an[i][j]=0;
}
else{
an[i][j]=1;
}
}
}
for(i=0;i<m;i++){
for(j=0;j<m;j++){
 

cout<<an[i][j]<<"\t";
}
cout<<endl;
}
 
}
void implication(bool mat1[50][50],bool mat2[50][50]){
 

bool an[50][50];
int i,j;
for(i=0;i<m;i++){
for(j=0;j<m;j++){
if(mat1[i][j]==true && mat2[i][j]==false){
an[i][j]=0;
}
else{
an[i][j]=1;
}
}
}
for(i=0;i<m;i++){
for(j=0;j<m;j++){
 
cout<<an[i][j]<<"\t";
}
cout<<endl;
}

}
void biimplication(bool mat1[50][50],bool mat2[50][50]){
 
bool an[50][50];
int i,j;
for(i=0;i<m;i++){
for(j=0;j<m;j++){
if((mat1[i][j]==true && mat2[i][j]==true)||(mat1[i][j]==false && mat2[i][j]==false)){
an[i][j]=1;
}
else{
an[i][j]=0;
}
}
}
for(i=0;i<m;i++){
for(j=0;j<m;j++){

cout<<an[i][j]<<"\t";
}
cout<<endl;
}
}
int main(){
int i,j;
bool mat1[50][50];
bool mat2[50][50];
cout<<"enter size of matrix: "<<endl;
cin>>m;
 

cout<<"enter element of 1st matrix: "<<endl;
for(i=0;i<m;i++){
for(j=0;j<m;j++){
cin>>mat1[i][j];
}
}
 

cout<<"enter element of 2ndt matrix: "<<endl;
for(i=0;i<m;i++){
for(j=0;j<m;j++){
cin>>mat2[i][j];
}
}
cout<<"matrix 1:"<<endl;
for(i=0;i<m;i++){
for(j=0;j<m;j++){
cout<<mat1[i][j]<<"\t";
}
cout<<endl;
}
cout<<"matrix 2:"<<endl;
for(i=0;i<m;i++){
for(j=0;j<m;j++){
cout<<mat2[i][j]<<"\t";
}
cout<<endl;
}
cout<<"mat1 ^ mat2:"<<endl;
conjuction(mat1,mat2);
cout<<"mat1 V mat2:"<<endl;
disjuction(mat1,mat2);
cout<<"mat1' and mat2':"<<endl;
negation(mat1,mat2);
cout<<"mat1 -> mat2: "<<endl;
implication(mat1,mat2);
cout<<"mat1 <-> mat2: "<<endl;
biimplication(mat1,mat2);
}
