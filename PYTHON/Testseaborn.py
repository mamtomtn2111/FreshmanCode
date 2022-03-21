import matplotlib.gridspec as gridspec
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import seaborn as sb
from matplotlib.pyplot import figure

sb.set()

tips = sb.load_dataset('tips')
fig, axes  = plt.subplots(nrows=2, ncols=2)
fig.set_figwidth(15)
fig.set_figheight(12)
fig.suptitle("Bi-Variate Analysis")

ax_colspan = plt.subplot2grid((2, 2), (0, 0), colspan=2)
sb.histplot(data = tips, x = 'total_bill', hue = 'sex', kde = True, color = "r")
ax_colspan.set_title('Male and Female Total Bill')


sb.boxplot(x="day", y="total_bill", hue="smoker", data=tips, palette="Set3", ax = axes[1,1])
axes[1,1].set_title('Box plot of Day and Total_Bill')

sb.scatterplot(data=tips, x="total_bill", y="tip", hue="time", ax=axes[1, 0])
axes[1, 0].set_title('Distribution tip and total_bill')

plt.show()
