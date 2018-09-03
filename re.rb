n, m = gets.split
a = []
n = n.to_i
m = m.to_i
for num1 in 1..(n / 2) + 1
    for num2 in 1..n
        if ((num1 + num2) % m == 0) then
            a.push(num2)
        end
    end
end

ans = 0
for num3 in a
    for num4 in 1..n
        if ((num3 + num4) % m == 0) then
            ans += 1
        end
    end
end

puts ans
