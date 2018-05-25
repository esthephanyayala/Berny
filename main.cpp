#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
    string mat[50][50];
    int n, edadMayor=100;
    string papaMayor="Berny";
    int conv,edadnueva=0;
    vector <pair<int,string> > fin;

    //cout<<"num de desc"<<endl;
    cin>>n;

    //LLENO LA MATRIZ
    for(int i=0; i<n;i++){
            cin>>mat[i][0]>>mat[i][1]>>mat[i][2];
            mat[i][3]='0';
    }

/* //IMPRIMIR MATRIZ
    for(int i=0; i<n;i++){
        for (int j=0; j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    /*//imprimir arreglo
    for(int i=0;i<n;i++){
        cout<<papaArr[i]<<" ";
    }
*/

    for(int i=0; i<n; i++){
            for(int j=0;j<n;j++){
       if(mat[j][0]==papaMayor && mat[j][3]=="0"){

            conv=atoi(mat[j][2].c_str()); //convertir de string a int
            edadnueva=edadMayor-conv;
           // cout<<"edad nueva"<<edadnueva<<endl;
            fin.push_back(make_pair(edadnueva,mat[j][1]));
            //meter el resultado en algo
            papaMayor=mat[j][1];
            edadMayor=edadnueva;
            mat[j][3]="1";//visitaste al PAPAP MAYOR

        }
    }
    }

    for(int i=0;i<n;i++){
        if(mat[i][3]=="0"){
            for(int j=0; j<fin.size();j++){
                if(mat[i][0]==fin[j].second){
                        conv=atoi(mat[i][2].c_str());
                        edadnueva=fin[j].first-conv;
                    fin.push_back(make_pair(edadnueva,mat[i][1]));
                }
            }
        }
 }
    sort(fin.begin(),fin.end());
    //desplegar vector
    for(int i=fin.size()-1;i>=0;i--){
        cout<<fin[i].second<<" "<<fin[i].first<<endl;
    }

}
