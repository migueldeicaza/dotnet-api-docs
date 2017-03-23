private:
   void CloneExample( PaintEventArgs^ e )
   {
      // Set several markers in a path.
      GraphicsPath^ myPath = gcnew GraphicsPath;
      myPath->AddEllipse( 0, 0, 100, 200 );
      myPath->AddLine( Point(100,100), Point(200,100) );
      Rectangle rect = Rectangle(200,0,100,200);
      myPath->AddRectangle( rect );
      myPath->AddLine( Point(250,200), Point(250,300) );

      // Draw the path to the screen.
      Pen^ myPen = gcnew Pen( Color::Black,2.0f );
      e->Graphics->DrawPath( myPen, myPath );

      // Clone a copy of myPath.
      GraphicsPath^ myPath2 = dynamic_cast<GraphicsPath^>(myPath->Clone());

      // Draw the path to the screen.
      Pen^ myPen2 = gcnew Pen( Color::Red,4.0f );
      e->Graphics->DrawPath( myPen2, myPath2 );
   }