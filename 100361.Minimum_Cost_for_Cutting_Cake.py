class Solution(object):
    def minimumCost(self, m, n, horizontalCut, verticalCut):
        cuts = []
        
        for i in range(len(horizontalCut)):
            cuts.append((horizontalCut[i],'H'))
            
        for j in range(len(verticalCut)):
            cuts.append((verticalCut[j],'V'))
            
        cuts.sort(reverse=True, key=lambda x: x[0])
        
        horizontal_segments = 1
        vertical_segments = 1
        total = 0
        
        for cost, cut_type in cuts:
            if cut_type=='H':
                total+= cost*vertical_segments
                horizontal_segments+=1
            else:
                total+= cost*horizontal_segments
                vertical_segments+=1
            
        return total
