/*
 * Problem #127: Word Ladder
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/3/2025, 10:44:44 PM
 * Link: https://leetcode.com/problems/word-ladder/
 */

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string>s(wordList.begin(),wordList.end());
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        while(!q.empty()){
            int st=q.front().second;
            string word=q.front().first;
            q.pop();
            if(word==endWord)return st;
            for(int i=0;i<word.size();i++){
                char o=word[i];
                for(char v='a';v<='z';v++){
                    word[i]=v;
                    if(s.find(word)!=s.end()){
                        s.erase(word);
                        q.push({word,st+1});
                    }
                }
                word[i]=o;
            }
        }
        return 0;
    }
};
