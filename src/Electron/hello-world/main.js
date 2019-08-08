const { app, BrowserWindow } = require('electron')

let mainWindow

app.on('ready', () => {
  mainWindow = new BrowserWindow({
    title: 'Hello World',
    width: 266,
    height: 150,
    center: true
  })

  mainWindow.loadURL('file://' + __dirname + '/index.html')

  mainWindow.on('closed', () => app.quit())
})

// Restore the window on Mac when the user click on the app icon in the dock
app.on('activate', () => {
  mainWindow.restore()
})

app.on('window-all-closed', () => {
  process.platform !== 'darwin'
    ? app.quit()
    : ''
})
