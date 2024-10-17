function isAnagram(str1, str2) {
    c=0;
    while(i!=str1.length)
        {
            
            
            if(str2.includes(str1[i]))
            {
                c++;
            }
            i++;
        }
    if(c==str1.length)
        return true
    else 
    return false

}
module.exports = isAnagram;
