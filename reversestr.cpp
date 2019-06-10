#include<iostream>
using namespace std;
#include<stdio.h>
#include<bits/stdc++.h>
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        char s[2000];
        vector<char>s1[100];
        int j=0,k=0,c=0;
        cin>>s;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]!='.')
            {
                s1[j].push_back(s[i]);
            }
            else
            { 
                j++;
                c++;
            }
        }
        for(int i=0;i<=j;i++)
        {
            for(int k=s1[i].size()-1;k>=0;k--)
             cout<<s1[i][k];
            if(c!=0)
            {
                cout<<".";
                c--;
            }
        }
        cout<<endl;
    }


	return 0;
}
