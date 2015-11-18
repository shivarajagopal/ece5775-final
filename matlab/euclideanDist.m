function dist = euclideanDist(M1, M2)
    distVector = sqrt(sum((M1-M2) .^ 2));
    total = sum(distVector);
    worstCase = max(distVector);
    dist = [total worstCase];
end