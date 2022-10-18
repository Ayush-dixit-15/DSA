        int newx = x+1;
        int newy = y;
        if(isSafe(newx,newy,n,visted,m)){
            path.push-back('D');
            solve(m,n,ans,newx,newy,visited,path);
            path.pop_back();
        }
        