class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        received = {5: 0, 10: 0, 20: 0}
        for b in bills:
            bill = b
            for change in [10, 5]:
                while bill > change and received[change] > 0:
                    bill -= change
                    received[change] -= 1

            if bill != 5:
                return False
            
            received[b] += 1

        return True
