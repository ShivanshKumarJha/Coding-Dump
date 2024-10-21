// #include<bits/stdc++.h>
// #include<string>
// using namespace std;

// int main(){
//     string s1 {};
//     string s2 {};
//     cout<<"1.Encrypt the message"<<endl;
//     cout<<"2.Decrypt the message"<<endl;
//     int choice;
//     cout<<"Enter Your Choice"<<endl;
//     cin>>choice;
//     if(choice==1){
//         cout<<"Enter the message you want to keep Secret"<<" ";
//         getline(cin,s1);
//         // cin>>s1;
//         for(int i=0;i<s1.length();i++){
//             if(s1[i]=='A' or s1[i]=='a'){
//                 s1[i]='X';
//             }
//             else if(s1[i]=='B' or s1[i]=='b'){
//                 s1[i]='Z';
//             }
//         }
//         cout<<"Your encypted message is "<<s1<<endl;

//     }
//      else if(choice==2){
//          cout<<"Enter Your Secret Message"<<" ";
//          getline(cin,s2);
//          for(int i=0;i<s2.length();i++){
//              if(s2[i]=='X'){
//                  s2[i]='a';
//              }
//              else if(s2[i]=='Z'){
//                  s2[i]='b';
//              }
//          }
//          cout<<"The decrypted message is "<<s2<<endl;   
//      }
//     return 0;
// }