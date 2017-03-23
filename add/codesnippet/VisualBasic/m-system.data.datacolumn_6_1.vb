
Private Sub AddDataColumn(ByVal table As DataTable)
    Dim column As DataColumn 
    column = New DataColumn("id")

    ' Set various properties.
    With column
       .DataType = System.Type.GetType("System.Int32")
       .AutoIncrement = True
       .AutoIncrementSeed = 1
       .AutoIncrementStep = 1
       .ReadOnly = True
     End With

    ' Add to Columns collection.
    table.Columns.Add(column)
End Sub