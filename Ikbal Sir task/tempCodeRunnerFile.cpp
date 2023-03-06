cout<<overlap(s[0], s[1])<<endl;
   while(s.size()!=1){
    int diff=INF, idx1=0,idx2=0;
        for(i=0;i<s.size();i++){
            for(j=0;j<s.size();j++){
                if(i==j)continue;

                string str = overlap(s[i],s[j]);

                if((s[i].size()+s[j].size() - str.size())<=diff){
                    diff=s[i].size()+s[j].size() - str.size();
                    idx1 = i;
                    idx2 = j;
                }
            }
        }
        s.pb(overlap(s[idx1], s[idx2]));
        s.erase(s.begin()+max(idx1,idx2));
        s.erase(s.begin()+min(idx1,idx2));
        
   }

   cout<<s[0]<<endl;