grade marks =
    if marks >= 90 then if marks >= 95 then "A+" else "A"
    else if marks >= 80 then "B"
    else if marks >= 70 then "C"
    else if marks >= 60 then "D"
    else "F"

gradeWithGuards marks
    | marks >= 90 = "A"
    | marks >= 80 = "B"
    | marks >= 70 = "C"
    | marks >= 60 = "D"
    | otherwise   = "F"

absoluteDifference x y = difference
  where
    difference =
      if x > y
      then x - y
      else y - x

factorial n = fact n
  where
    fact 0 = 1
    fact x = x * fact (x - 1)

data Vehicle
    = Car String Integer
    | Truck String Integer Integer

vehicleTypes :: [Vehicle] -> [Integer]
vehicleTypes [] = []
vehicleTypes (x:xs) =
    case x of
        Car _ z -> z : vehicleTypes xs
        Truck _ z _ -> z : vehicleTypes xs

data RunLength = Span Integer Char deriving Eq

instance Show RunLength where
  show (Span length c) =
    "Length: " ++ show length ++ ", Character: " ++ show c

runLengthEncode :: [Char] -> [RunLength]
runLengthEncode [] = []
runLengthEncode (x:xs) = encodeSpan 1 x xs
  where
    encodeSpan count current [] = [Span count current]
    encodeSpan count current (y:ys)
      | current == y = encodeSpan (count + 1) current ys
      | otherwise =
          Span count current : encodeSpan 1 y ys

mergesort :: Ord a => (a -> a -> Bool) -> [a] -> [a]
mergesort _ [] = []
mergesort _ [x] = [x]
mergesort cmp list =
  merge
    (mergesort cmp leftHalf)
    (mergesort cmp rightHalf)
  where
    (leftHalf, rightHalf) =
      splitAt (length list `div` 2) list

    merge [] ys = ys
    merge xs [] = xs

    merge (x:xs) (y:ys)
      | cmp x y = x : merge xs (y:ys)
      | otherwise = y : merge (x:xs) ys
first x y = x*x