bool isPalindrome(int x) {
    int num1=x;
    int num2=x;
    long ans=0;
    int count=0;

    if(x<0){
        return false;
    }

    while(num1!=0){
        num1=num1/10;
        count++;
    }

    while(num2!=0){

        int rem=num2%10;
        ans=ans*10+rem;
        num2=num2/10;
    }

        if(x==ans ){
            return true;
        }

        return false;
}