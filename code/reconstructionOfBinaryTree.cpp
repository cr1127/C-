
#include <iostream> 
#include <vector> 
#include <stack>
#include <algorithm>
  
using namespace std; 

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
// TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
//     if(pre.empty()||vin.empty())
//     {
//         return NULL; 
//     }

//     int root = pre.at(0);
//     TreeNode* result=new TreeNode(root);


//     vector<int>::iterator iter = find(vin.begin(),vin.end(),root);
//     int ltN = distance(vin.begin(),iter);

//     vector<int> pre_lft,pre_rgt;
//     vector<int> vin_lft,vin_rgt;
//     for(int i=0;i<ltN;i++)
//     {
//         pre_lft.push_back(pre.at(i+1));
//         vin_lft.push_back(vin.at(i));
//     }
//     for(int i=ltN+1;i<vin.size();i++)
//     {
//         pre_rgt.push_back(pre.at(i));
//         vin_rgt.push_back(vin.at(i));
//     }
    
//     result->left=reConstructBinaryTree(pre_lft,vin_lft);
//     result->right=reConstructBinaryTree(pre_rgt,vin_rgt);

//     return result;
// }
TreeNode* reConsturctBinaryTree(vector<int> re,int startre,int endre,vector<int> vin,int startvin,int endvin)
{
    if(startre>endre||startvin>endvin)
        return NULL;
    TreeNode* root= new TreeNode(TreeNode(re[startre]));
    for(int  i=startvin;i<=endvin;i++)
    {
        if(vin[i]==re[startre])
        {

            root->left=reConsturctBinaryTree(re,startre+1,startre+i-startvin,vin,startvin,i-1);
            root->right=reConsturctBinaryTree(re,i-startvin+startre+1,endre,vin,i+1,endvin);
                
        }
    }
    return root;
}
TreeNode* reConstructBinaryTree(vector<int> re,vector<int> vin) 
{
    TreeNode* root = reConsturctBinaryTree(re,0,re.size()-1,vin,0,vin.size()-1);
    return root;
}


int main() 
{  
    vector<int> pre={1,2,4,7,3,5,6,8};
    vector<int> vin={4,7,2,1,5,3,8,6};  
    TreeNode* recTree = reConstructBinaryTree(pre,vin);
    vector<int> result = preOrder(recTree);
    for(auto i : result)
    {
        cout<<i<<" ";
    }
    cout << endl;
    return 0; 
}
