scores = [88, 92, 77, 54, 100, 45, 90]
total_score = 0
for score in scores:
    total_score += score
    if (score <= 60):
        print(f"{score} is a failing score.")

print(total_score)
