def solution(numbers):
    n = len(numbers)
    visited = [0] * n

    counter = 0
    index = 0

    while(True):
        next_index = index + numbers[index]
        if next_index >= n: 
            return counter + 1
        elif visited[next_index]:
            return -1
        visited[index] = 1
        index = next_index
        counter += 1
    
print(solution([2,3,-1,1,3]))
print(solution([1,1,-1,1]))
