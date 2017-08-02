
%%%%%%%%%%%%%%%%%%%
%%% TEX FUNCTIONS
%%%%%%%%%%%%%%%%%%%
\usepackage{soul}
\newcommand{\mycolorcomment}[1]{\hl{#1}}
\newcommand{\unicomment}[1]{\mycolorcomment{[#1]}}
\newcommand{\unibeginitemize}{\begin{itemize}}
\newcommand{\unienditemize}{\end{itemize}}
\newcommand{\uniitem}[1]{\begin{itemize}\item #1\end{itemize}}
\newcommand{\unipara}[1]{- #1\\}
\newcommand{\unihead}[1]{\noindent #1}
\newcommand{\uniauthor}[1]
{
\begin{large}
\begin{center}
#1\\
\end{center}
\end{large}
}
\newcommand{\unititle}[1]
{
\begin{Large}
\begin{center}
{\bfseries #1\\}
\end{center}
\end{Large}
}
\newcommand{\iexfleche}[1]{{\bfseries #1\\}}
\newcommand{\unisec}[1]{\section{#1}}
\newcommand{\unisection}[1]{\section{#1}}
\newcommand{\unisubsection}[1]{\subsection{#1}}
\newcommand{\unisubsubsection}[1]{\subsubsection{#1}}
\newcommand{\unipar}{\bigskip}
\newcommand{\unibullet}[1]
{
\begin{itemize}
\item #1
\end{itemize}
}
\newcommand{\uniclr}{\clearpage}
\newcommand{\unitab}[1]{#1\\}
\newcommand{\uniline}[1]{#1\\}
\newcommand{\unitexline}[1]{#1}
\newcommand{\unichapter}[1]{\chapter{#1}}

\newcommand{\unifig}[2]{
\begin{center}
\includegraphics[width=1.0\textwidth,keepaspectratio]{#1}\\
\end{center}
}
\newcommand{\unifigplus}[5]
{
\begin{figure}[!htbp]
\centering
\includegraphics[keepaspectratio,width=1.000\textwidth]{#1}
\caption{#2}
\label{#3}
\end{figure}
}

\usepackage{enumitem}
\newcounter{unibullcounter}
\setcounter{unibullcounter}{1}
\newcommand{\uninumbering}[1]
{
\begin{itemize}[topsep=0pt,itemsep=-1ex,partopsep=0pt,parsep=0pt, itemindent=-0ex,leftmargin=4.3ex]
\smallskip
\smallskip
\item[{\arabic{unibullcounter}}.]{#1}
\end{itemize}
\smallskip
\addtocounter{unibullcounter}{1}
}

