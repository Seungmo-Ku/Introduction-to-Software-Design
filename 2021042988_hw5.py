class Student :
    subjectN = ["Calculus", "Software", "English"]
    def __init__(self, name) :
        self.name = name
        self.dict = {'A+' : 4.5, 'A0' : 4.0, 'B+' : 3.5, 'B0' : 3.0, 'C+' : 2.5, 'C0' : 2.0, 'D+' : 1.5, 'D0' : 1.0, 'F' : 0}
        self.score = [0, 0, 0]
        self.grade = ['F', 'F', 'F']
        self.avg = [0, 0, 0]
    def __str__ (self) :
        info = "\n"+self.name + '\n'
        for a in range(0, 3):
            self.avg[a] = self.dict[self.grade[a]]
        for a in range(0, 3):
            

            info += self.subjectN[a] + " " + str(self.score[a]) + " " +self.grade[a] + "\n"

        info += "Average " +str((self.avg[0] + self.avg[1] + self.avg[2]) / 3.0) +"\n========"
        return info

    def input_score(self, subject, score):
        for a in range(0, 3) :
            if subject == self.subjectN[a] :
                self.score[a] = score
                if score >= 95 :
                    self.grade[a] = 'A+'
                elif score >= 90 :
                    self.grade[a] = 'A0'
                elif score >= 85 :
                    self.grade[a] = 'B+'
                elif score >= 80 :
                    self.grade[a] = 'B0'
                elif score >= 75 :
                    self.grade[a] = 'C+'
                elif score >= 70 :
                    self.grade[a] = 'C0'
                elif score >= 65 :
                    self.grade[a] = 'D+'
                elif score >= 60 :
                    self.grade[a] = 'D0'
                else :
                    self.grade[a] = 'F'
Students = ['', '', '']

for a in range(0, 3) :
    Students[a] =  Student(input ("Student name : "))
    for b in range(0, 3) :
        Students[a].input_score(Students[a].subjectN[b], int(input(Students[a].subjectN[b] +" Score : ")))
for a in range(0, 3) :
    print(Students[a])
