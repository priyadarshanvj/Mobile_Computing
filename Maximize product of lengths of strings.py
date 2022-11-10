def maximizeProduct(arr):

	n = len(arr)
	result = 0
	for i in range(n):
		s1 = arr[i]
		len1 = len(arr[i])

		unmap = {}
		for c in s1:
			if(c in unmap):
				unmap += 1
			
			unmap = 1

		for j in range(i+1,n):
			s2 = arr[j]
			len2 = len(arr[j])

			flag = False

			for k in range(len(s2)):

				if (s2[k] in unmap):
					flag = True
					break
				
			if (flag == False):
				result = max(result, len1 * len2)
			
	return result


n = int(input())
for i in range(0, n):
    ele = int(input())
    arr.append(ele)

print(result)

