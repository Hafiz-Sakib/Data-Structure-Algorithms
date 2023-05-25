## Count of K length Path in a Graph 
![image](https://user-images.githubusercontent.com/63524824/201547530-05c43c48-4143-4674-8f5a-826cb868b928.png)

Source : https://youtube.com/clip/UgkxZWl-ThG8Cgql7Bft7zWSjyD9106csUM0

```

Step 1 :  Get Adjacency Matrice of Graph - Mat(M) 
Step 2 :  Determine  [ Mat(M)^K ] by using Matrix Exponentiation
Step 3 :  Here , Matrix say that - How many path each node has with other node. 


```

![image](https://user-images.githubusercontent.com/63524824/201547954-ab1c85b0-6241-4323-bd70-ebcd69c170f6.png)


Here, G` say that , node-0 has 2 path with node-3 of length 2. Same way, node-0 has 1 path with node-2 of length 2. 
Each time we increase the power of Mat , it return the count of k length path. 

Intially k = 1 , then increse it , when k = 2 , NewMat = Mat * Mat , Then newMat return the the count of 2 length path. 

Then, again increase k , now k = 3 . NewMat = Mat * Mat * Mat . NewMat return the the count of 3 length path. 


#### complexity 

  Total Complexity = matrix multiplication * bigmod = <strong> O( n^3 * log(k) ) </strong> , here , n is the number of nodes in the graph.


### Caution : 

If n > 100 , it will be tough using the Matrix Exponentiation mentioned above.In this case , follow : 
<ul>
  <li>https://codeforces.com/blog/entry/63353</li>
  <li>https://www.quora.com/profile/Abbas-Rangwala-13/Centroid-Decomposition-of-a-Tree</li>
  
</ul>


### Probelm Collection : 

<ul>
  <li>https://codeforces.com/contest/161/problem/D</li>
</ul>
