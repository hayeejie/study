M=ceil(rand*10)
for (i=1:3)
    n=input('Input a number between 1 to 10:');
    if n==M
        disp('You Won');
        break;
    elseif n>M
        disp('High');
    elseif n<M
        disp('Low');
    end
    i=i+1;
end

m=input('Input a number:');
for i=2:m
    for p=2:i
        if rem(i,p)==0 break;
        else p=p+1;
        end
        if p==i
            disp(i);
        end
    end
    i=i+1;
end