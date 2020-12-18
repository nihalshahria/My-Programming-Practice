#include <bits/stdc++.h>
#define mid ((b+e)/2)
const int sz=100005; // size of array
int arr[sz],seg[sz*4],n;
void build(int node,int b,int e){
    if(b==e){
        seg[node]=arr[b];
        return;
    }
    build(node*2,b,mid);
    build(node*2+1,mid+1,e);
    seg[node]=seg[node*2]+seg[node*2+1];
    /*
    seg[node]=max(seg[node*2],seg[node*2+1]);
    seg[node]=min(seg[node*2],seg[node*2+1]);
    */
}
int query(int node,int b,int e,int l,int r) // l r is range for query
{
    if(b>r || e<l) return 0; // return INT_MAX for max query return INT_MIN for min query
    if(b>=l && e<=r){
        return seg[node];
    }
    return query(node*2,b,mid,l,r)+query(node*2+1,mid+1,e,l,r);
    /*
    return max(query(node*2,b,mid,l,r),query(node*2+1,mid+1,e,l,r));
    return min(query(node*2,b,mid,l,r),query(node*2+1,mid+1,e,l,r));
    */
}
void update(int node,int b,int e,int i,int val) // update at i'th index with value val
{
    if(b>i || e<i) return;
    if(b==e){
        arr[i]=val;
        seg[node]=val;
        return;
    }
    update(node*2,b,mid,i,val);
    update(node*2+1,mid+1,e,i,val);
    seg[node]=seg[node*2]+seg[node*2+1];
    /*
    seg[node]=max(seg[node*2],seg[node*2+1]);
    seg[node]=min(seg[node*2],seg[node*2+1]);
    */
}
