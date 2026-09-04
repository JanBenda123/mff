using System;

namespace DS 
{
    class ListNode
    {

        

        
    }   

    class TrieNode 
    {
        ListNode head;
        char ch;
        public TrieNode(char ch) 
        {
            this.ch = ch;   
            head = null;
        }
        char getCh() 
        {
            return ch;
        }

    }
}
