### Compile
First run `qmake` to compile*.pro file and generate `makefile`, then run `makefile` to compile source files
If *.pro file is changed, re-run `qmake`

### Signal Slot

Connect (sender, signal, receiver, slot)
```cpp
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
            ui->progressBar_2, SLOT(setValue(int)));

       disconnect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
                                            ui->progressBar, SLOT(setValue(int)));
```

### Widgets
When we check `dialog.h` we only see the a pointer to `ui` but not the other elements of the form/window/dialog

```cpp
    Ui::Dialog *ui;
```

Other than checking ui file `dialog.ui` in QT Creator Design, we can inspect ui file as an xml document.

```html
<ui version="4.0">
 <class>Dialog</class>
 <widget class="QDialog" name="Dialog">
  <widget class="QLabel" name="label">
   <property name="text">
    <string>Hello world</string>
   </property>
  </widget>
 </widget>
</ui>
```

So we can change these attributes via cpp file
```cpp
    ui->label->setText("<b>Hello everyone</b>");
```

#### Add signal slot
To add function to `dialog.cpp`

Right click widget -> Go to slot -> Select signal (clicked)

Here, the signal is clicking button, slot is `on_pushButton_clicked()` function.
Function will be called when `clicked` signal is emitted.

```cpp
// dialog.c
void Dialog::on_pushButton_clicked()
{
    
}
// dialog.h
private slots:
    void on_pushButton_clicked();

```
### Resource File
is a collection of data that can be put in executable when it is compiled and can be accessed at runtime

`Add New` -> `Qt` -> `Qt Resource File`

`Add` -> `Add Prefix` like directory path to group resource files. eg: `/MyFiles`

`Add` -> `Add File` to add file under prefix. eg: `13_ResourceFiles.pro`

Access resource data by prefixing with `:`

```cpp
    Read(":/MyFiles/13_ResourceFiles.pro");
```

### Show window
if dialog is shown "modal", we cannot turn back to main window when the dialog is open

```cpp
    mDialog.setModal(true);
    mDialog.exec();
```
instead `show()` can be used
```cpp
    /* if we use show, the dialog disappears immediately after showing
    * since function ends and returns*/
    mDialog.show();
```

if a widget is created without a window
```cpp
    QLabel *label = new QLabel("<b>Hello</b> <font color=red><i>world</i></font>");
    // This is a widget so when showing it, QT will encapsulate it with a window
    label->show();
```
