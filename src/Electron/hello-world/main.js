'use strict';

const electron = require('electron');
const {app, BrowserWindow} = electron;

let mainWindow;

app.on('ready', () => {
  mainWindow = new BrowserWindow({
    title: 'Hello World',
    minWidth: 266,
    minHeight: 150,
    center: true,
    resizable: true,
    movable: true,
  });

  mainWindow.loadURL('file://' + __dirname + '/index.html');

  mainWindow.on('closed', () => {
    mainWindow = null;
    app.quit();
  });
});

app.on('activate', (e) => {
  mainWindow.restore();
});

app.on('window-all-closed', () => {
  if (process.platform !== 'darwin')
      app.quit();
});
