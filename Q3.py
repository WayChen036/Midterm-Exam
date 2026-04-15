def min_coins(amount):
    denominations = [25, 10, 5, 1]  # Sorted in descending order
    coins_used = []
    total_coins = 0
    
    for coin in denominations:
        if amount >= coin:
            num_coins = amount // coin
            coins_used.extend([coin] * num_coins)
            total_coins += num_coins
            amount -= num_coins * coin
    
    print("Selected coins (largest to smallest):", coins_used)
    return total_coins

# Test with amount = 63
result = min_coins(63)
print("Minimum number of coins:", result)